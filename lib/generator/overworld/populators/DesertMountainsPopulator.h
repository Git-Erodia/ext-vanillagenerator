#ifndef EXT_NOISELIB_LIB_GENERATOR_POPULATORS_DESERTMOUNTAINSPOPULATOR_H_
#define EXT_NOISELIB_LIB_GENERATOR_POPULATORS_DESERTMOUNTAINSPOPULATOR_H_

#include "DesertPopulator.h"

class DesertMountainsPopulator : public DesertPopulator {
 public:
  void InitPopulators() override;

  [[nodiscard]] std::vector<uint_fast8_t> GetBiomes() const override;
};

#endif //EXT_NOISELIB_LIB_GENERATOR_POPULATORS_DESERTMOUNTAINSPOPULATOR_H_
