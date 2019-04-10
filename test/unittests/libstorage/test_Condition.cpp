/*
 * @CopyRight:
 * FISCO-BCOS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FISCO-BCOS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with FISCO-BCOS.  If not, see <http://www.gnu.org/licenses/>
 * (c) 2016-2018 fisco-dev contributors.
 */
/** @file test_Condition.cpps
 *  @author monan
 *  @date 20190410
 */

#include "Common.h"
#include <libdevcrypto/Common.h>
#include <libstorage/Table.h>
#include <boost/test/unit_test.hpp>

using namespace dev;

namespace test_Condition
{

struct ConditionFixture
{
    ConditionFixture()
    {
        auto condition = std::make_shared<storage::Condition>();
    }

    ~ConditionFixture() {}
};

BOOST_FIXTURE_TEST_SUITE(Condition, ConditionFixture)

BOOST_AUTO_TEST_CASE(call)
{
}

BOOST_AUTO_TEST_SUITE_END()

}
