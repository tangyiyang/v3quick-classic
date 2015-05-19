//
//  CCFileCache.h
//  libquick
//
//  Created by 唐 艺洋 on 12/5/14.
//
//

#ifndef __libquick__CCFileCache__
#define __libquick__CCFileCache__

#include "cocos2d.h"
USING_NS_CC;

class CCFileCache : Ref {
public:
    CCFileCache() {}
    virtual ~CCFileCache() {}

public:
    static CCFileCache* getInstance();
    static void destory();

public:
    bool isExist(const char* fileName);
    void addFile(const char* fileName);
    void addFile(const char* fileName, unsigned char* filedata, int length);
    unsigned char* getFileData(const char* fileName, int* length);
    void purge();

protected:
    std::map<std::string, unsigned char*> m_datas;
    std::map<std::string, int> m_lengths;
};

#endif /* defined(__libquick__CCFileCache__) */
