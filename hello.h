/** Hello.h
 *
 * Our module for printing hello.
 * Yes, it's pointless. It's also the most basic example of splitting software into 
 * multiple files. If this program did something useful, then this would be a module
 * dedicated to a specific task (e.g., drawing graphics on-screen).
 *
 * @author Hans de Ruiter
 *
 * See License.md for licensing.
 */

#pragma once

/** Prints hello.
 *
 * @param name the name of whoever we're saying hello to
 */
void printHello(const char *name);
