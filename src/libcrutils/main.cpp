/* This file is part of crutils.
 *
 * crutils is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option) any
 * later version.
 *
 * crutils is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with crutils. If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * Copyright (C)
 *  2013-2016 Alexander Haase <ahaase@alexhaase.de>
 */

/*
 * include header-files
 */
#include <cstdio>

#include "unistd.h"

#include "crutils.h"

void print_code(const char *p_code) {
	printf("code: %s\n", p_code);
}


int main() {
	crutils cr_handle;
	cr_handle.set_handler(&print_code);
	cr_handle.listen();

	sleep(100);
	cr_handle.stop();
}
