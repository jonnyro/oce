// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_PrinterOStream_HeaderFile
#define _Message_PrinterOStream_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Message_PrinterOStream_HeaderFile
#include <Handle_Message_PrinterOStream.hxx>
#endif

#ifndef _Message_Gravity_HeaderFile
#include <Message_Gravity.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Message_Printer_HeaderFile
#include <Message_Printer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TCollection_AsciiString;
class TCollection_ExtendedString;


//! Implementation of a message printer associated with an ostream <br>
//!          The ostream may be either externally defined one (e.g. cout), <br>
//!          or file stream maintained internally (depending on constructor). <br>
class Message_PrinterOStream : public Message_Printer {

public:

  //! Empty constructor, defaulting to cout <br>
  Standard_EXPORT   Message_PrinterOStream(const Message_Gravity theTraceLevel = Message_Info);
  //! Create printer for output to a specified file. <br>
//!          The option theDoAppend specifies whether file should be <br>
//!          appended or rewritten. <br>
//!          For specific file names (cout, cerr) standard streams are used <br>
  Standard_EXPORT   Message_PrinterOStream(const Standard_CString theFileName,const Standard_Boolean theDoAppend,const Message_Gravity theTraceLevel = Message_Info);
  //! Flushes the output stream and destroys it if it has been <br>
//!          specified externally with option doFree (or if it is internal <br>
//!          file stream) <br>
  Standard_EXPORT     void Close() ;
~Message_PrinterOStream()
{
  Close();
}
  //! Return trace level used for filtering messages; <br>
//!          messages with lover gravity will be ignored. <br>
        Message_Gravity GetTraceLevel() const;
  //! Set trace level used for filtering messages. <br>
//!          By default, trace level is Message_Info, so that <br>
//!          all messages are output <br>
        void SetTraceLevel(const Message_Gravity theTraceLevel) ;
  //! Returns option to convert non-Ascii symbols to UTF8 encoding <br>
        Standard_Boolean GetUseUtf8() const;
  //! Sets option to convert non-Ascii symbols to UTF8 encoding <br>
        void SetUseUtf8(const Standard_Boolean useUtf8) ;
  //! Returns reference to the output stream <br>
        Standard_OStream& GetStream() const;
  //! Puts a message to the current stream <br>
//!          if its gravity is equal or greater <br>
//!          to the trace level set by SetTraceLevel() <br>
  Standard_EXPORT   virtual  void Send(const Standard_CString theString,const Message_Gravity theGravity,const Standard_Boolean putEndl = Standard_True) const;
  //! Puts a message to the current stream <br>
//!          if its gravity is equal or greater <br>
//!          to the trace level set by SetTraceLevel() <br>
  Standard_EXPORT   virtual  void Send(const TCollection_AsciiString& theString,const Message_Gravity theGravity,const Standard_Boolean putEndl = Standard_True) const;
  //! Puts a message to the current stream <br>
//!          if its gravity is equal or greater <br>
//!          to the trace level set by SetTraceLevel() <br>
//!          Non-Ascii symbols are converted to UTF-8 if UseUtf8 <br>
//!          option is set, else replaced by symbols '?' <br>
  Standard_EXPORT   virtual  void Send(const TCollection_ExtendedString& theString,const Message_Gravity theGravity,const Standard_Boolean putEndl = Standard_True) const;



  DEFINE_STANDARD_RTTI(Message_PrinterOStream)

protected:




private: 


Message_Gravity myTraceLevel;
Standard_Address myStream;
Standard_Boolean myIsFile;
Standard_Boolean myUseUtf8;


};


#include <Message_PrinterOStream.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif