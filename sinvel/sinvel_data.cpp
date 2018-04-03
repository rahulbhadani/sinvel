/*
 * sinvel_data.cpp
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

#include "sinvel.h"
#include "sinvel_private.h"

/* Block parameters (auto storage) */
P_sinvel_T sinvel_P = {
  {
    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    },                                 /* Linear */

    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    }                                  /* Angular */
  },                                   /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S1>/Constant'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/r'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/r'
                                        */
  0.25,                                /* Expression: 0.25
                                        * Referenced by: '<Root>/r'
                                        */
  0.12,                                /* Expression: 0.12
                                        * Referenced by: '<Root>/r'
                                        */
  0.0                                  /* Expression: 0.0
                                        * Referenced by: '<Root>/Steering angle'
                                        */
};
