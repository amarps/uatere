#ifndef UATERE_COMMON_H
#define UATERE_COMMON_H

struct v2d
{
  int x;
  int y;

  v2d() : x(0), y(0) {}
  v2d(int px, int py) : x(px), y(py) {}

  v2d operator+(const v2d& vctr){
    v2d new_vctr;
    new_vctr.x = x + vctr.x;
    new_vctr.y = x + vctr.y;
    return new_vctr;
  }

  v2d operator-(const v2d &vctr)
  {
    v2d new_vctr;
    new_vctr.x = x - vctr.x;
    new_vctr.y = y - vctr.y;
    return new_vctr;
  }

  v2d operator*(const v2d &vctr)
  {
    v2d new_vctr;
    new_vctr.x = x * vctr.x;
    new_vctr.y = y * vctr.y;
    return new_vctr;
  }

  v2d operator/(const v2d &vctr)
  {
    v2d new_vctr;
    new_vctr.x = x / vctr.x;
    new_vctr.y = y / vctr.y;
    return new_vctr;
  }

  v2d operator+(int v)
  {
    v2d new_vctr;
    new_vctr.x = x + v;
    new_vctr.y = y + v;
    return new_vctr;
  }

  v2d operator-(int v)
  {
    v2d new_vctr;
    new_vctr.x = x - v;
    new_vctr.y = y - v;
    return new_vctr;
  }

  v2d operator*(int v)
  {
    v2d new_vctr;
    new_vctr.x = x * v;
    new_vctr.y = y * v;
    return new_vctr;
  }

  v2d operator/(int v)
  {
    v2d new_vctr;
    new_vctr.x = x / v;
    new_vctr.y = y / v;
    return new_vctr;
  }
};

#endif
