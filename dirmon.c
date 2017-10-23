/* Monitor directories for change, useing inotify */

#include <stdio.h>
#include <stdlib.h>
#include <sys/inotify.h>
#include <limits.h>
#include <unistd.h>
#include <errno.h>

/* A buffer big enough to hold 100 events */
#define BUFSIZE (100 * (sizeof(struct inotify_event)+ NAME_MAX + 1))

void main()
{
  int notifyfd, watchfd;
  char eventbuf[BUFSIZE];  /* Events are read into here */
  int n;
  char *p;
  struct inotify_event *event;

  notifyfd = inotify_init();  /* Not checked for error */

  watchfd = inotify_add_watch(notifyfd, "/home/tduis/dummy", IN_CREATE|IN_DELETE|IN_ACCESS);
  if ( watchfd < 0) {
    perror("error watch fd /home/tduis/dummy");
  }

  watchfd = inotify_add_watch(notifyfd, "/etc", IN_CREATE|IN_DELETE);

  /* Out watches are in place, read the event stream */
  while(1)
  {
    n=read(notifyfd, eventbuf, BUFSIZE);

    /* loop over all events */
    for ( p = eventbuf; p < eventbuf + n;) 
    {
      event = (struct inotify_event *) p;
      p += sizeof(struct inotify_event) +event->len;

      /* Display the event */
      if (event->mask & IN_CREATE) printf("%s created\n", event->name);
      if (event->mask & IN_ACCESS) printf("%s accessed\n", event->name);
      if (event->mask & IN_DELETE) printf("%s deleted\n", event->name);
     
    } /* end for */

  } /* end while */

}
