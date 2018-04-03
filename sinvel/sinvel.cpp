/*
 * sinvel.cpp
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
#define sinvel_MessageQueueLen         (1)

/* Block states (auto storage) */
DW_sinvel_T sinvel_DW;

/* Real-time model */
RT_MODEL_sinvel_T sinvel_M_;
RT_MODEL_sinvel_T *const sinvel_M = &sinvel_M_;

/* Model step function */
void sinvel_step(void)
{
  SL_Bus_sinvel_geometry_msgs_Twist rtb_BusAssignment;

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<Root>/Steering angle'
   *  Constant: '<S1>/Constant'
   *  Sin: '<Root>/r'
   */
  rtb_BusAssignment = sinvel_P.Constant_Value;
  rtb_BusAssignment.Linear.X = sin(sinvel_P.r_Freq * sinvel_M->Timing.t[0] +
    sinvel_P.r_Phase) * sinvel_P.r_Amp + sinvel_P.r_Bias;
  rtb_BusAssignment.Angular.Z = sinvel_P.Steeringangle_Value;

  /* Outputs for Atomic SubSystem: '<Root>/Publish for Leader Vel' */
  /* Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
   *  MATLABSystem: '<S2>/SinkBlock'
   */
  Pub_sinvel_27.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish for Leader Vel' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++sinvel_M->Timing.clockTick0)) {
    ++sinvel_M->Timing.clockTickH0;
  }

  sinvel_M->Timing.t[0] = sinvel_M->Timing.clockTick0 *
    sinvel_M->Timing.stepSize0 + sinvel_M->Timing.clockTickH0 *
    sinvel_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.2s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.2, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    sinvel_M->Timing.clockTick1++;
    if (!sinvel_M->Timing.clockTick1) {
      sinvel_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void sinvel_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)sinvel_M, 0,
                sizeof(RT_MODEL_sinvel_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&sinvel_M->solverInfo, &sinvel_M->Timing.simTimeStep);
    rtsiSetTPtr(&sinvel_M->solverInfo, &rtmGetTPtr(sinvel_M));
    rtsiSetStepSizePtr(&sinvel_M->solverInfo, &sinvel_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&sinvel_M->solverInfo, (&rtmGetErrorStatus(sinvel_M)));
    rtsiSetRTModelPtr(&sinvel_M->solverInfo, sinvel_M);
  }

  rtsiSetSimTimeStep(&sinvel_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&sinvel_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(sinvel_M, &sinvel_M->Timing.tArray[0]);
  sinvel_M->Timing.stepSize0 = 0.2;

  /* states (dwork) */
  (void) memset((void *)&sinvel_DW, 0,
                sizeof(DW_sinvel_T));

  {
    static const char_T tmp[18] = { '/', 'a', 'z', 'c', 'a', 'r', '_', 's', 'i',
      'm', '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    char_T tmp_0[19];
    int32_T i;

    /* Start for Atomic SubSystem: '<Root>/Publish for Leader Vel' */
    /* Start for MATLABSystem: '<S2>/SinkBlock' */
    sinvel_DW.obj.isInitialized = 0;
    sinvel_DW.objisempty = true;
    sinvel_DW.obj.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[18] = '\x00';
    Pub_sinvel_27.createPublisher(tmp_0, sinvel_MessageQueueLen);

    /* End of Start for MATLABSystem: '<S2>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish for Leader Vel' */
  }
}

/* Model terminate function */
void sinvel_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Publish for Leader Vel' */
  /* Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
   *  Terminate for MATLABSystem: '<S2>/SinkBlock'
   */
  if (sinvel_DW.obj.isInitialized == 1) {
    sinvel_DW.obj.isInitialized = 2;
  }

  /* End of Start for MATLABSystem: '<S2>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish for Leader Vel' */
}
