![build status](https://travis-ci.org/nturley/savant.svg?branch=master)

These directories contain the documentation and source code for the SAVANT project.  The
SAVANT project is an effort to build an extensible, object-oriented intermediate form (IF)
for the hardware description language VHDL (only the '93 language standard).  The software
developed under the SAVANT project is freely available under the GNU Public Library
License.

The primary goal of SAVANT is to stimulate research among the VHDL community by providing
an extensible, object-oriented, well-documented intermediate form (IF) and a freely
available analyzer (SCRAM) to convert VHDL into the IF.  Because the IF analyzer is
released in source form, the additional derived classes can be inserted into the C++ class
hierarchy.  Thus, user actions can benefit fully from the fact that the IF is
object-oriented.  Consequently, no procedural interface is provided or needed.

The SAVANT project includes several elements of software support (see the file COMPONENTS
in this directory).  Instructions for installing the software are located in the file
INSTALL (this directory).  The software is freely available under the terms of the Gnu
Public Library license, included with this release.

SAVANT has been compiled and tested under Linux.  Efforts have been made to make it
portable.  If you have patches to allow compilation on other platforms, if you have
success or failures on other platforms, or if you have any comments at all we'd be
interested in hearing them.

Currently, we have not ported this system to any version of Windows. 
