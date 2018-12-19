// Copyright (C) 2018 go-nebulas authors
//
// This file is part of the go-nebulas library.
//
// the go-nebulas library is free software: you can redistribute it and/or
// modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// the go-nebulas library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with the go-nebulas library.  If not, see
// <http://www.gnu.org/licenses/>.
//

#include "core/neb_ipc/server/ipc_configuration.h"

namespace neb {
namespace core {

ipc_configuration::ipc_configuration() {
  // m_nbre_root_dir = std::getenv("NBRE_ROOT_DIR");
  // m_nbre_exe_name = std::getenv("NBRE_EXE_NAME");
  // m_neb_db_dir = std::getenv("NEB_DB_DIR");
  // m_nbre_db_dir = std::getenv("NBRE_DB_DIR");
  // m_nbre_log_dir = std::getenv("NBRE_LOG_DIR");
}

ipc_configuration::~ipc_configuration() = default;
} // namespace core
} // namespace neb
