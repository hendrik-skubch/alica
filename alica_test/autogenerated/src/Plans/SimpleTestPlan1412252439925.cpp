#include "Plans/SimpleTestPlan1412252439925.h"
using namespace alica;
/*PROTECTED REGION ID(eph1412252439925) ENABLED START*/ //Add additional using directives here
/*PROTECTED REGION END*/
namespace alicaAutogenerated
{
//Plan:SimpleTestPlan

//Check of RuntimeCondition - (Name): NewRuntimeCondition, (ConditionString): , (Comment) :  

/* 
 * Available Vars:
 */
bool RunTimeCondition1412781693884::evaluate(shared_ptr<RunningPlan> rp)
{
  /*PROTECTED REGION ID(1412781693884) ENABLED START*/
  return true;
  /*PROTECTED REGION END*/
}

//Check of PreCondition - (Name): NewPreCondition, (ConditionString):  , (Comment) :  

/*
 * Available Vars:
 */
bool PreCondition1412781707952::evaluate(shared_ptr<RunningPlan> rp)
{
  /*PROTECTED REGION ID(1412781707952) ENABLED START*/
  //--> "PreCondition:1412781707952  not implemented";
  return true;
  /*PROTECTED REGION END*/
}

/* generated comment
 
 Task: DefaultTask  -> EntryPoint-ID: 1412252439927

 */
shared_ptr<UtilityFunction> UtilityFunction1412252439925::getUtilityFunction(Plan* plan)
{
  /*PROTECTED REGION ID(1412252439925) ENABLED START*/

  shared_ptr < UtilityFunction > defaultFunction = make_shared < DefaultUtilityFunction > (plan);
  return defaultFunction;

  /*PROTECTED REGION END*/
}

//State: TestState1 in Plan: SimpleTestPlan

/*
 *		
 * Transition:
 *   - Name: , ConditionString: , Comment :  
 *
 * Plans in State: 				
 *   - Plan - (Name): NewBehaviourDefault, (PlanID): 1402488712657 
 *
 * Tasks: 
 *   - DefaultTask (1225112227903) (Entrypoint: 1412252439927)
 *
 * States:
 *   - TestState1 (1412252439926)
 *   - TestState2 (1412761855746)
 *
 * Vars:
 */
bool TransitionCondition1412761926856::evaluate(shared_ptr<RunningPlan> rp)
{
  /*PROTECTED REGION ID(1412761925032) ENABLED START*/
  return false;
  /*PROTECTED REGION END*/

}

//State: TestState2 in Plan: SimpleTestPlan

}
