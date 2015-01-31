/*    unittest_architecture.h
 *    Copyright (C) 2014-2015  Made to Order Software Corporation
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License along
 *    with this program; if not, write to the Free Software Foundation, Inc.,
 *    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *    Authors
 *    Alexis Wilke   alexis@m2osw.com
 */
#ifndef UNIT_TEST_ARCHITECTURE_H
#define UNIT_TEST_ARCHITECTURE_H

#include <cppunit/extensions/HelperMacros.h>
#include "libdebpackages/wpkg_architecture.h"


class ArchitectureUnitTests : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE( ArchitectureUnitTests );
        CPPUNIT_TEST( valid_vendors );
        CPPUNIT_TEST( verify_abbreviations );
        CPPUNIT_TEST( verify_os );
        CPPUNIT_TEST( verify_processors );
        CPPUNIT_TEST( verify_architecture );
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();

protected:
    void valid_vendors();
    void verify_abbreviations();
    void verify_os();
    void verify_processors();
    void verify_architecture();

private:
};

#endif
// vim: ts=4 sw=4 et
