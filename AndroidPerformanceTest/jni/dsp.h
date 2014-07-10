/*******************************************************************************
 * Copyright 2014 See AUTHORS file.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/
#include <cstdint>

struct FilterState {
	static constexpr int size = 16;

    double input[size];				// Must use doubles for these arrays, otherwise can be noisy.
    double output[size];
	unsigned int current;

	FilterState() : input{}, output{}, current{} {}
};

void apply_lowpass(FilterState& filter_state, const int16_t* input, int16_t* output, int length);
