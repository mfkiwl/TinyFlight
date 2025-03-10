#pragma once

#include <stdint.h>

typedef struct {

    float x;
    float y;
    float z;

} axis3_t;

// From Eqn. (11) in Bouabdallah,  Murrieri, Siegwart (2004)
typedef struct {

    axis3_t pos;  // x, y, z
    axis3_t dpos; // dx, dy, dz
    axis3_t ang;  // phi, theta, psi
    axis3_t dang; // dphi, dtheta, dpsi

} state_t;

typedef struct {

    uint32_t c1;
    uint32_t c2;
    uint32_t c3;
    uint32_t c4;
    uint32_t c5;
    uint32_t c6;

} channels_t;

typedef struct {

    float thrust;
    float roll;
    float pitch;
    float yaw;

} demands_t;

typedef struct {

    float m1;
    float m2;
    float m3;
    float m4;

} quad_motors_t;

typedef struct {

    float w;
    float x;
    float y;
    float z;

} quat_t;
