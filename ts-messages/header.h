#ifndef HEADER_H
#define HEADER_H
#include <string>
#include <functional>
#include <json.h>
using std::string;

class Header
{

    bool mReadValid;
    bool mWriteValid;
    Json::Reader mReader;
    Json::FastWriter mWriter;
    Json::Value mReadRoot;
    Json::Value mWriteRoot;

  public:
    Header();
    ~Header();
    
    int getSource();
    void setSource(int source);
    string getDestination();
    void setDestination(string destination);
    string getType();
    void setType(string type);
    std::string getMessage(void)
    {
        return mWriter.write(mWriteRoot);
    }

    Json::Value get(void)
    {
        return mWriteRoot;
    }

    void setMessage(std::string str)
    {
        if (mReader.parse(str, mReadRoot, false))
        {
            mReadValid = true;
        }
        else
        {
            mReadValid = false;
        }
    }

    void set(Json::Value obj)
    {
        mReadRoot = obj;
    }
};
#endif //HEADER_H
