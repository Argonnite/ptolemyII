// define class name and unique id
#ifdef FMI_FROM_SOURCE
#define FMI2_FUNCTION_PREFIX Linsys_
#endif
#include <fmi2TypesPlatform.h>
#include <fmi2Functions.h>
#define MODEL_GUID "{8c4e810f-3df3-4a00-8276-176fa3c9f9e0}"
#include <cstdio>
#include <cstring>
#include <cassert>
#include "sfmi_runtime.h"
using namespace std;
using namespace sfmi;

// define model size
#define NUMBER_OF_STATES 2
#define NUMBER_OF_EVENT_INDICATORS 0
#define NUMBER_OF_REALS 8
#define NUMBER_OF_INTEGERS 0
#define NUMBER_OF_STRINGS 0
#define NUMBER_OF_BOOLEANS 0
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define variable data for model
#define timeValue (data->Time)
#define _x_0__ 0 
#define _x_0_ (data->real_vars[0]) 
#define _x_1__ 1 
#define _x_1_ (data->real_vars[1]) 
#define _DER_x_0__ 2 
#define _DER_x_0_ (data->real_vars[2]) 
#define _DER_x_1__ 3 
#define _DER_x_1_ (data->real_vars[3]) 
#define _A_0_0__ 4 
#define _A_0_0_ (data->real_vars[4]) 
#define _A_0_1__ 5 
#define _A_0_1_ (data->real_vars[5]) 
#define _A_1_0__ 6 
#define _A_1_0_ (data->real_vars[6]) 
#define _A_1_1__ 7 
#define _A_1_1_ (data->real_vars[7]) 

#define _PRE_x_0__ 0 
#define _PRE_x_0_ (data->pre_real_vars[0]) 
#define _PRE_x_1__ 1 
#define _PRE_x_1_ (data->pre_real_vars[1]) 
#define _PRE_DER_x_0__ 2 
#define _PRE_DER_x_0_ (data->pre_real_vars[2]) 
#define _PRE_DER_x_1__ 3 
#define _PRE_DER_x_1_ (data->pre_real_vars[3]) 
#define _PRE_A_0_0__ 4 
#define _PRE_A_0_0_ (data->pre_real_vars[4]) 
#define _PRE_A_0_1__ 5 
#define _PRE_A_0_1_ (data->pre_real_vars[5]) 
#define _PRE_A_1_0__ 6 
#define _PRE_A_1_0_ (data->pre_real_vars[6]) 
#define _PRE_A_1_1__ 7 
#define _PRE_A_1_1_ (data->pre_real_vars[7]) 

// define initial state vector as vector of value references
static const fmi2ValueReference STATES[NUMBER_OF_STATES] = { _x_0__, _x_1__ };
static const fmi2ValueReference STATESDERIVATIVES[NUMBER_OF_STATES] = { _DER_x_0__, _DER_x_1__ };


// Removed equations


// dynamic equation functions


/*
 equation index: 11
 type: SIMPLE_ASSIGN
 der(x[2]) = A[2,1] * x[1] + A[2,2] * x[2]
 */
static void eqFunction_11(model_data *data)
{
    _DER_x_1_ = ((_A_1_0_ * _x_0_) + (_A_1_1_ * _x_1_));
}
/*
 equation index: 12
 type: SIMPLE_ASSIGN
 der(x[1]) = A[1,1] * x[1] + A[1,2] * x[2]
 */
static void eqFunction_12(model_data *data)
{
    _DER_x_0_ = ((_A_0_0_ * _x_0_) + (_A_0_1_ * _x_1_));
}

// Zero crossing functions


// Dependency graph for sparse updates
static void setupEquationGraph(model_data *data)
{
    // Dynamic equations
    data->link(eqFunction_11,&_DER_x_1_);
    data->link(&_A_1_0_,eqFunction_11);
    data->link(&_x_0_,eqFunction_11);
    data->link(&_A_1_1_,eqFunction_11);
    data->link(&_x_1_,eqFunction_11);
    data->link(eqFunction_12,&_DER_x_0_);
    data->link(&_A_0_0_,eqFunction_12);
    data->link(&_x_0_,eqFunction_12);
    data->link(&_A_0_1_,eqFunction_12);
    data->link(&_x_1_,eqFunction_12);
    // Zero crossings
}

// initial condition equations


/*
 equation index: 4
 type: SIMPLE_ASSIGN
 A[2,2] = -1.0
 */
static void eqFunction_4(model_data *data)
{
    _A_1_1_ = -1.0;
}
/*
 equation index: 3
 type: SIMPLE_ASSIGN
 A[2,1] = 0.0
 */
static void eqFunction_3(model_data *data)
{
    _A_1_0_ = 0.0;
}
/*
 equation index: 2
 type: SIMPLE_ASSIGN
 A[1,2] = 0.0
 */
static void eqFunction_2(model_data *data)
{
    _A_0_1_ = 0.0;
}
/*
 equation index: 1
 type: SIMPLE_ASSIGN
 A[1,1] = -0.5
 */
static void eqFunction_1(model_data *data)
{
    _A_0_0_ = -0.5;
}
/*
 equation index: 5
 type: SIMPLE_ASSIGN
 x[2] = 2.0
 */
static void eqFunction_5(model_data *data)
{
    _x_1_ = 2.0;
}
/*
 equation index: 6
 type: SIMPLE_ASSIGN
 x[1] = 1.0
 */
static void eqFunction_6(model_data *data)
{
    _x_0_ = 1.0;
}
/*
 equation index: 7
 type: SIMPLE_ASSIGN
 der(x[2]) = A[2,1] * x[1] + A[2,2] * x[2]
 */
static void eqFunction_7(model_data *data)
{
    _DER_x_1_ = ((_A_1_0_ * _x_0_) + (_A_1_1_ * _x_1_));
}
/*
 equation index: 8
 type: SIMPLE_ASSIGN
 der(x[1]) = A[1,1] * x[1] + A[1,2] * x[2]
 */
static void eqFunction_8(model_data *data)
{
    _DER_x_0_ = ((_A_0_0_ * _x_0_) + (_A_0_1_ * _x_1_));
}

// Set values for all variables that define a start value
static void setDefaultStartValues(model_data *comp)
{
    comp->Time = 0.0;
    comp->real_vars[_x_0__] = 0;
    comp->real_vars[_x_1__] = 0;
    comp->real_vars[_DER_x_0__] = 0;
    comp->real_vars[_DER_x_1__] = 0;
    comp->real_vars[_A_0_0__] = -0.5;
    comp->real_vars[_A_0_1__] = 0.0;
    comp->real_vars[_A_1_0__] = 0.0;
    comp->real_vars[_A_1_1__] = -1.0;
}


// Solve for unknowns in the model's initial equations
static void initialEquations(model_data* data)
{

    eqFunction_4(data);
    eqFunction_3(data);
    eqFunction_2(data);
    eqFunction_1(data);
    eqFunction_5(data);
    eqFunction_6(data);
    eqFunction_7(data);
    eqFunction_8(data);

}

// Solve all dynamic equations
static void allEquations(model_data* data)
{
    eqFunction_11(data);
    eqFunction_12(data);

}

// model exchange functions

const char* fmi2GetTypesPlatform() { return fmi2TypesPlatform; }
const char* fmi2GetVersion() { return fmi2Version; }

fmi2Status fmi2SetDebugLogging(fmi2Component, fmi2Boolean, size_t, const fmi2String*)
{
    return fmi2OK;
}

fmi2Status fmi2SetupExperiment(fmi2Component c, fmi2Boolean, fmi2Real, fmi2Real startTime, fmi2Boolean, fmi2Real)
{
    return fmi2SetTime(c,startTime);
}

fmi2Status fmi2EnterInitializationMode(fmi2Component c)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    data->set_mode(FMI_INIT_MODE);
    return fmi2OK;
}

fmi2Status fmi2ExitInitializationMode(fmi2Component c)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    initialEquations(data);
    allEquations(data);
    data->push_pre();
    return fmi2OK;
}

fmi2Status fmi2Terminate(fmi2Component)
{
    return fmi2OK;
}

fmi2Status fmi2Reset(fmi2Component c)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    setDefaultStartValues(data);
    initialEquations(data);
    allEquations(data);
    data->push_pre();
    data->set_mode(FMI_INIT_MODE);
    return fmi2OK;
}

fmi2Status fmi2GetFMUstate(fmi2Component, fmi2FMUstate*) { return fmi2Error; }
fmi2Status fmi2SetFMUstate(fmi2Component, fmi2FMUstate) { return fmi2Error; }
fmi2Status fmi2FreeFMUstate(fmi2Component, fmi2FMUstate*) { return fmi2Error; }
fmi2Status fmi2SerializedFMUstateSize(fmi2Component, fmi2FMUstate, size_t*) { return fmi2Error; }
fmi2Status fmi2SerializeFMUstate(fmi2Component, fmi2FMUstate, fmi2Byte*, size_t) { return fmi2Error; }
fmi2Status fmi2DeSerializeFMUstate(fmi2Component, const fmi2Byte[], size_t, fmi2FMUstate*) { return fmi2Error; }
fmi2Status fmi2GetDirectionalDerivative(fmi2Component, const fmi2ValueReference*, size_t,
                                                 const fmi2ValueReference*, size_t,
                                                 const fmi2Real*, fmi2Real*) { return fmi2Error; }

fmi2Status fmi2GetDerivatives(fmi2Component c, fmi2Real* der, size_t nvr)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL || nvr > NUMBER_OF_STATES) return fmi2Error;
    for (size_t i = 0; i < nvr; i++) der[i] = data->real_vars[STATESDERIVATIVES[i]];
    return fmi2OK;
}

fmi2Status fmi2GetEventIndicators(fmi2Component c, fmi2Real* z, size_t nvr)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL || nvr > NUMBER_OF_EVENT_INDICATORS) return fmi2Error;
    for (size_t i = 0; i < nvr; i++) z[i] = data->z[i];
    return fmi2OK;
}

fmi2Status fmi2GetContinuousStates(fmi2Component c, fmi2Real* states, size_t nvr)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL || nvr > NUMBER_OF_STATES) return fmi2Error;
    for (size_t i = 0; i < nvr; i++) states[i] = data->real_vars[STATES[i]];
    return fmi2OK;
}

fmi2Status fmi2SetContinuousStates(fmi2Component c, const fmi2Real* states, size_t nvr)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL || nvr > NUMBER_OF_STATES) return fmi2Error;
    for (size_t i = 0; i < nvr; i++)
    {
        data->real_vars[STATES[i]] = states[i];
        data->modify(&(data->real_vars[STATES[i]]));
    }
    return fmi2OK;
}

fmi2Status fmi2GetNominalsOfContinuousStates(fmi2Component c, fmi2Real* nominals, size_t nvr)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL || nvr > NUMBER_OF_STATES) return fmi2Error;
    for (size_t i = 0; i < nvr; i++) nominals[i] = 1.0;
    return fmi2OK;
}

 fmi2Status fmi2EnterEventMode(fmi2Component c)
 {
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    data->set_mode(FMI_EVENT_MODE);
    return fmi2OK;
 }

 fmi2Status fmi2NewDiscreteStates(fmi2Component c, fmi2EventInfo* event_info)
 {
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    data->push_pre();
    data->update();
    if (data->test_pre())
    {
       event_info->newDiscreteStatesNeeded = fmi2False;
       event_info->valuesOfContinuousStatesChanged = fmi2False;
    }
    else
    {
       event_info->newDiscreteStatesNeeded = fmi2True;
       event_info->valuesOfContinuousStatesChanged = fmi2True;
    }
    event_info->terminateSimulation = fmi2False;
    event_info->nominalsOfContinuousStatesChanged = fmi2False;
    event_info->nextEventTimeDefined = fmi2False;
    event_info->nextEventTime = 0.0;
    return fmi2OK;
 }

 fmi2Status fmi2EnterContinuousTimeMode(fmi2Component c)
 {
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    data->set_mode(FMI_CONT_TIME_MODE);
    return fmi2OK;
 }

 fmi2Status fmi2CompletedIntegratorStep(fmi2Component c, fmi2Boolean,
     fmi2Boolean* enterEventMode, fmi2Boolean* terminateSimulation)
 {
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL || enterEventMode == NULL || terminateSimulation == NULL) return fmi2Error;
    data->update();
    *enterEventMode = fmi2False;
    *terminateSimulation = fmi2False;
    return fmi2OK;
 }

fmi2Status
fmi2SetTime(fmi2Component c, fmi2Real t)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    data->Time = t;
    data->modify(&(data->Time));
    return fmi2OK;
}

fmi2Status
fmi2GetReal(fmi2Component c, const fmi2ValueReference* vr, size_t nvr, fmi2Real* value)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] >= NUMBER_OF_REALS) return fmi2Error;
        value[i] = data->real_vars[vr[i]];
    }
    return fmi2OK;
}

fmi2Status
fmi2SetReal(fmi2Component c, const fmi2ValueReference* vr, size_t nvr, const fmi2Real* value)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] >= NUMBER_OF_REALS) return fmi2Error;
        data->real_vars[vr[i]] = value[i];
        data->modify((&data->real_vars[vr[i]]));
    }
    return fmi2OK;
}

fmi2Status
fmi2GetInteger(fmi2Component c, const fmi2ValueReference* vr, size_t nvr, fmi2Integer* value)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] >= NUMBER_OF_INTEGERS) return fmi2Error;
        value[i] = data->int_vars[vr[i]];
    }
    return fmi2OK;
}

fmi2Status
fmi2SetInteger(fmi2Component c, const fmi2ValueReference* vr, size_t nvr, const fmi2Integer* value)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] >= NUMBER_OF_INTEGERS) return fmi2Error;
        data->int_vars[vr[i]] = value[i];
        data->modify((&data->int_vars[vr[i]]));
    }
    return fmi2OK;
}

fmi2Status
fmi2GetBoolean(fmi2Component c, const fmi2ValueReference* vr, size_t nvr, fmi2Boolean* value)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] >= NUMBER_OF_BOOLEANS) return fmi2Error;
        value[i] = data->bool_vars[vr[i]];
    }
    return fmi2OK;
}

fmi2Status
fmi2SetBoolean(fmi2Component c, const fmi2ValueReference* vr, size_t nvr, const fmi2Boolean* value)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] >= NUMBER_OF_BOOLEANS) return fmi2Error;
        data->bool_vars[vr[i]] = value[i];
        data->modify((&data->bool_vars[vr[i]]));
    }
    return fmi2OK;
}

fmi2Status
fmi2GetString(fmi2Component c, const fmi2ValueReference* vr, size_t nvr, fmi2String* value)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] >= NUMBER_OF_STRINGS) return fmi2Error;
        value[i] = data->str_vars[vr[i]].c_str();
    }
    return fmi2OK;
}

fmi2Status
fmi2SetString(fmi2Component c, const fmi2ValueReference* vr, size_t nvr, const fmi2String* value)
{
    model_data* data = static_cast<model_data*>(c);
    if (data == NULL) return fmi2Error;
    for (size_t i = 0; i < nvr; i++)
    {
        if (vr[i] >= NUMBER_OF_STRINGS) return fmi2Error;
        data->str_vars[vr[i]] = value[i];
        data->modify((&data->str_vars[vr[i]]));
    }
    return fmi2OK;
}

fmi2Component
fmi2Instantiate(
  fmi2String instanceName,
  fmi2Type fmuType,
  fmi2String fmuGUID,
  fmi2String fmuResourceLocation,
  const fmi2CallbackFunctions* functions,
  fmi2Boolean visible,
  fmi2Boolean loggingOn)
{
    model_data* data = new model_data(
        NUMBER_OF_REALS,NUMBER_OF_INTEGERS,NUMBER_OF_STRINGS,NUMBER_OF_BOOLEANS,NUMBER_OF_EVENT_INDICATORS);
    setupEquationGraph(data);
    setDefaultStartValues(data);
    initialEquations(data);
    allEquations(data);
    return static_cast<fmi2Component>(data);
}

void
fmi2FreeInstance(fmi2Component c)
{
    model_data* data = static_cast<model_data*>(c);
    if (data != NULL) delete data;
}


