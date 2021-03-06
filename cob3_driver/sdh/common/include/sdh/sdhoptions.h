//======================================================================
/*!
    \file
     \section sdhlibrary_cpp_demo_sdhoptions_h_general General file information

       \author   Dirk Osswald
       \date     2008-05-05

     \brief
       Implementation of a class to parse common SDH related command line options

     \section sdhlibrary_cpp_demo_sdhoptions_h_copyright Copyright

     Copyright (c) 2008 SCHUNK GmbH & Co. KG

     <HR>
     \internal

       \subsection sdhlibrary_cpp_demo_sdhoptions_h_details SVN related, detailed file specific information:
         $LastChangedBy: Osswald2 $
         $LastChangedDate: 2008-10-13 17:07:24 +0200 (Mo, 13 Okt 2008) $
         \par SVN file revision:
           $Id: sdhoptions.h 3686 2008-10-13 15:07:24Z Osswald2 $

     \subsection sdhlibrary_cpp_demo_sdhoptions_h_changelog Changelog of this file:
         \include sdhoptions.h.log

*/
//======================================================================

#ifndef SDHOPTIONS_h
#define SDHOPTIONS_h

//----------------------------------------------------------------------
// System Includes - include with <>
//----------------------------------------------------------------------

#include <getopt.h>
#include <assert.h>

#include <iostream>

//----------------------------------------------------------------------
// Project Includes - include with ""
//---------------------------------------------------------------------


//----------------------------------------------------------------------
// Defines, enums, unions, structs,
//----------------------------------------------------------------------


//----------------------------------------------------------------------
// Global variables
//----------------------------------------------------------------------


// class for option parsing holding option parsing results
class cSDHOptions
{
public:
    char* usage;

    int           port;
    unsigned long rs232_baudrate;
    int           debug_level;
    std::ostream* debuglog;
    bool          use_radians;
    bool          use_fahrenheit;
    double        period;
    double        timeout;
    bool          use_can;
    int           net;
    unsigned long can_baudrate;
    unsigned int  id_read;
    unsigned int  id_write;

    //! constructor: init members to their default values
    cSDHOptions(void);

    /*! parse the command line parameters \a argc, \a argv into members. \a helptext, \a progname, \a version, \a libname and \a librelease are used when printing online help.
        start parsing at option with index *p_option_index
        parse all options if parse_all is true, else only one option is parsed

        \return the optind index of the first non option argument in argv
     */
    int Parse( int argc, char** argv,
                char const* helptext, char const* progname, char const* version, char const* libname, char const* librelease );
};


#endif

//======================================================================
/*
  Here are some settings for the emacs/xemacs editor (and can be safely ignored):
  (e.g. to explicitely set C++ mode for *.h header files)

  Local Variables:
  mode:C++
  mode:ELSE
  End:
*/
//======================================================================
