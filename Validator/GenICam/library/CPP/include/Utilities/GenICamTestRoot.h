//  This file is generated automatically. Do not modify! 

#ifndef INCLUDED_GENICAMTESTROOT_H
#define INCLUDED_GENICAMTESTROOT_H

#include <Base/GCUtilities.h>
#include <Utilities/GenICamRoot.h>
#include <vector>
#include <string>

#define GENICAM_TEST_GENAPI_XML_ROOT_PATH "C:/Imperx/GenICam_v3.1.0_VC140/xml/GenApi/"
#define GENICAM_TEST_HEADER_ROOT_PATH     "C:/Imperx/GenICam_v3.1.0_VC140/library/CPP/include/"

#define GENICAM_TEST_CL_XML_ROOT_PATH     "C:/Imperx/GenICam_v3.1.0_VC140/Bin/CLProtocol/Test/"
#define GENICAM_TEST_CLALLSERIAL_PATH     "C:/Imperx/GenICam_v3.1.0_VC140/Bin/" PLATFORM_NAME "/" DLL_NAME("CLAllSerial")
namespace GENICAM_NAMESPACE
{
    namespace Test
    {

        //! Get the path of the GenApi Xml root
        inline GenICam::gcstring MakeTestGenApiXmlRootPath()
        {
            GenICam::gcstring path;
            path = GenICam::GetGenICamRootFolderSafe() + "/xml/GenApi/";

            return path;
        }
        
        //! Get the header root
        inline GenICam::gcstring MakeTestHeaderRootPath()
        {
            GenICam::gcstring path;
            path = GetGenICamRootFolderSafe() + "/library/CPP/include/";

            return path;
        }

        //! Get the path of CLAllSerial
        inline GenICam::gcstring MakeCLAllSerialPath()
        {
            GenICam::gcstring path;
            path = GetGenICamRootFolderSafe() + "/Bin/" PLATFORM_NAME "/" DLL_NAME("CLAllSerial");

            return path;
        }


        inline GenICam::gcstring MakeTestXMLFolder(const gcstring &TestCategory)
        {
            GenICam::gcstring path = GetGenICamRootFolderSafe() + "/xml/GenApi/";
            path += TestCategory;
            path += "/";

            return path;
        }

        //! Get the path of a test xml
        inline GenICam::gcstring MakeTestXMLPath(const gcstring &TestCategory, const gcstring &FileName, bool Compressed=false)
        {
            GenICam::gcstring path;
            path = GetGenICamRootFolderSafe() + "/xml/GenApi/";
            path += TestCategory;
            path += "/";
            path += FileName;
            path += Compressed ? ".zip" : ".xml";

            return path;
        }

    }
}

#endif // INCLUDED_GENICAMTESTROOT_H
