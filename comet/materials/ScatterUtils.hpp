// MIT License

// Copyright (c) 2019 Ganesh Belgur Ramachandra

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


#ifndef COMET_SCATTERUTILS_HPP
#define COMET_SCATTERUTILS_HPP

#include "comet/utils/Vec3f.hpp"

namespace comet
{
    // Utility methods
    // Returns a random vector inside a unit sphere
    Vec3f randomInUnitSphere();

    // Returns the reflected ray of a vector v
    Vec3f reflect(const Vec3f& v, const Vec3f& normal);

    // Returns a refracted ray for an incident ray
    bool refract(const Vec3f& incident,
                 const Vec3f& normal,
                 float ni_over_nt,
                 Vec3f& refracted);

    // Christophe Schlick's approximation
    float schlick(float cosine, float refractiveIndex);

} // namespace comet

#endif
