#include <Win32ML\Messages.hpp>

const char* GetMessageAsString(UINT msg) {
    
    if (mapOfMsgs->find(msg) != mapOfMsgs->end()) {
        return (*mapOfMsgs)[msg];
    }

    return "<UNKNOWN_MESSAGE_VALUE>";
}