/*
 * sinvel_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "sinvel".
 *
 * Model version              : 1.33
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C++ source code generated on : Mon Apr  2 20:57:50 2018
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_sinvel_types_h_
#define RTW_HEADER_sinvel_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sinvel_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sinvel_geometry_msgs_Vector3_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_sinvel_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sinvel_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sinvel_geometry_msgs_Twist_

typedef struct {
  SL_Bus_sinvel_geometry_msgs_Vector3 Linear;
  SL_Bus_sinvel_geometry_msgs_Vector3 Angular;
} SL_Bus_sinvel_geometry_msgs_Twist;

#endif

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  int32_T isInitialized;
} robotics_slros_internal_block_T;

#endif                                 /*typedef_robotics_slros_internal_block_T*/

#ifndef typedef_struct_T_sinvel_T
#define typedef_struct_T_sinvel_T

typedef struct {
  real_T f1[2];
} struct_T_sinvel_T;

#endif                                 /*typedef_struct_T_sinvel_T*/

#ifndef typedef_struct_T_sinvel_o_T
#define typedef_struct_T_sinvel_o_T

typedef struct {
  char_T f1[4];
} struct_T_sinvel_o_T;

#endif                                 /*typedef_struct_T_sinvel_o_T*/

#ifndef typedef_struct_T_sinvel_oc_T
#define typedef_struct_T_sinvel_oc_T

typedef struct {
  char_T f1[8];
} struct_T_sinvel_oc_T;

#endif                                 /*typedef_struct_T_sinvel_oc_T*/

#ifndef typedef_struct_T_sinvel_ocl_T
#define typedef_struct_T_sinvel_ocl_T

typedef struct {
  char_T f1[7];
} struct_T_sinvel_ocl_T;

#endif                                 /*typedef_struct_T_sinvel_ocl_T*/

#ifndef typedef_struct_T_sinvel_oclr_T
#define typedef_struct_T_sinvel_oclr_T

typedef struct {
  char_T f1[8];
  char_T f2[7];
  char_T f3[6];
} struct_T_sinvel_oclr_T;

#endif                                 /*typedef_struct_T_sinvel_oclr_T*/

/* Parameters (auto storage) */
typedef struct P_sinvel_T_ P_sinvel_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_sinvel_T RT_MODEL_sinvel_T;

#endif                                 /* RTW_HEADER_sinvel_types_h_ */
