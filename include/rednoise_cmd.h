#ifndef __rednoise_cmd__
#define __rednoise_cmd__
/*****
  command line parser interface -- generated by clig 
  (http://wsd.iitb.fhg.de/~kir/clighome/)

  The command line parser `clig':
  (C) 1995---2001 Harald Kirsch (kirschh@lionbioscience.com)
*****/

typedef struct s_Cmdline {
  /***** -startwidth: The initial windowing size. */
  char startwidthP;
  int startwidth;
  int startwidthC;
  /***** -endwidth: The final windowing size. */
  char endwidthP;
  int endwidth;
  int endwidthC;
  /***** -endfreq: The highest frequency where the windowing increases. */
  char endfreqP;
  double endfreq;
  int endfreqC;
  /***** uninterpreted command line parameters */
  int argc;
  /*@null*/char **argv;
  /***** the whole command line concatenated */
  char *full_cmd_line;
} Cmdline;


extern char *Program;
extern void usage(void);
extern /*@shared*/Cmdline *parseCmdline(int argc, char **argv);

extern void showOptionValues(void);

#endif
