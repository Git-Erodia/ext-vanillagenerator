#ifndef EXT_NOISELIB_LIB_GENERATOR_POPULATORS_SUNFLOWERPLAINSPOPULATOR_H_
#define EXT_NOISELIB_LIB_GENERATOR_POPULATORS_SUNFLOWERPLAINSPOPULATOR_H_

#include "PlainsPopulator.h"

class SunflowerPlainsPopulator : public PlainsPopulator {
 public:
  void InitPopulators() override;

  [[nodiscard]] std::vector<uint_fast8_t> GetBiomes() const override;
};

#endif //EXT_NOISELIB_LIB_GENERATOR_POPULATORS_SUNFLOWERPLAINSPOPULATOR_H_
