/*
 * USummand.h
 *
 *  Created on: Jul 9, 2014
 *      Author: Stefan Jakob
 */

#ifndef USUMMAND_H_
#define USUMMAND_H_

#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "engine/PlanRepository.h"
#include "engine/Types.h"
#include "engine/UtilityInterval.h"
#include "engine/model/EntryPoint.h"

namespace alica
{

class EntryPoint;
class IAssignment;

/**
 * Abstract super class for domain dependent utility summands.
 */
class USummand
{
public:
    USummand()
            : _weight(0.0)
    {
    }
    USummand(double weight)
            : _weight(weight)
    {
    }

    virtual ~USummand() {}

    void addEntryPoint(const EntryPoint* ep) { _relevantEntryPoints.push_back(ep); }

    std::string toString() const
    {
        std::stringstream ss;
        ss << "UF: Weight " << _weight << "EntryPoints: ";
        for (const EntryPoint* ep : _relevantEntryPoints) {
            ss << ep->getId() << " ";
        }
        ss << std::endl;
        return ss.str();
    }
    double getWeight() const { return _weight; }
    /**
     * Evaluates the utilityfunction summand
     * @return The result of the evaluation
     */
    virtual UtilityInterval eval(IAssignment ass) const = 0;
    /**
     * Cache every data for the current evaluation, to
     * assure consistency over the complete current evaluation.
     */
    virtual void cacheEvalData(){};
    // virtual std::pair<std::vector<double>, double>* differentiate(IAssignment* newAss) { return nullptr; }
    void setWeight(double weight) { _weight = weight; }

protected:
    EntryPointGrp _relevantEntryPoints;
    double _weight;
};

} /* namespace alica */

#endif /* USUMMAND_H_ */
