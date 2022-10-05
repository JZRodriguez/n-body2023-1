// Author: Jadiel Zuñiga Rodriguez
// zujadiel@gmail.com
// GNU/Linux

#ifndef JELLY_H
#define JELLY_H

#ifdef __cplusplus
extern "C" {
#endif

  typedef struct {
    int flavor;
    int color;
  }Jelly;

  //flavor 0:lemon, 1:strawberry...  color 0:black, 1:green, 2:red...
  Jelly new_jelly(int flavor, int color);

  void print_jelly(Jelly jelly);

#ifdef __cplusplus
}
#endif

#endif
