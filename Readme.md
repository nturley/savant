![build status](https://travis-ci.org/nturley/savant.svg?branch=master)
# SAVANT

AIRE is the IR standard
SAVANT is an implementation of the AIRE standard
SCRAM is a parser frontend to the SAVANT framework
You can also write backends as plugins. For instance, there is an example XML backend plugin.

Binaries and doxygen are here: http://nturley-buildartifacts.s3-website-us-west-1.amazonaws.com/

I'm going to try to clean up, modernize, and experiment with continuous integration, using the Savant codebase. I'm going to see how I can use travis-ci to help me refactor and modernize this code.

Savant is a good test case because it looks pretty large, pretty useful, but looks like it's starting to bitrot.

## Completed Tasks

*  Get it to build on my machine
*  Get it building on travis
*  Publish binaries and doxygen on Amazon S3
  * Is this really the best place for it? I'm not sure if this will work very well if someone tries to branch. Maybe I should switch to github pages. I just don't like the idea of uploading binaries to source control.

## Todo list (in no particular order)
*  My export tarballs are neat but I should figure out the debian package management thing
*  Doxygen runs but it's screaming bloody murder. It looks like doxygen command syntax has changed. I might need to write some fancy regex to fix it.
*  C-string assignment is causing a million warnings. Might need to write another fancy regex
*  I want to throw a large corpus of VHDL at SAVANT and see how it runs.
  *  I think this would be a separate github project
  *  Probably running the XML backend
  *  I could organize my corpus into the different VHDL standards and see how it copes
*  C++ standard library might be able to replace clutils. Then I could remove the dependency.

Original Readme
---------------

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
