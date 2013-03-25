/*
 * Mixer.cpp - Kurento Media Server
 *
 * Copyright (C) 2013 Kurento
 * Contact: Miguel París Díaz <mparisdiaz@gmail.com>
 * Contact: José Antonio Santos Cadenas <santoscadenas@kurento.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Mixer.hpp"

namespace kurento
{

Mixer::Mixer (MediaFactory &mediaFactory) : MediaObjectImpl (mediaFactory.token)
{
  this->mediaFactory = &mediaFactory;
}

Mixer::~Mixer() throw ()
{

}

MixerPort *
Mixer::getMixerPort ()
{
  //TODO: complete
  return new MixerPort (*mediaFactory, this);
}

} // kurento
