//
//  CCFileCache.cpp
//  libquick
//
//  Created by 唐 艺洋 on 12/5/14.
//
//

#include "CCFileCache.h"

static CCFileCache* s_instance = NULL;
CCFileCache* CCFileCache::getInstance() {
    if (!s_instance) {
        s_instance = new CCFileCache();
    }
    return s_instance;
}

void CCFileCache::destory() {

    CC_SAFE_DELETE(s_instance);
}

bool CCFileCache::isExist(const char* fileName) {
    return m_datas.find(fileName) != m_datas.end();
}


void CCFileCache::addFile(const char* fileName) {
    if (!isExist(fileName)) {
        ssize_t size = 0;
        unsigned char* bytes = FileUtils::getInstance()->getFileData(fileName, "rb", &size);
        this->addFile(fileName, bytes, (int)size);
    }
}
void CCFileCache::addFile(const char* fileName, unsigned char* filedata, int length) {
    unsigned char *newAddr = (unsigned char*)malloc(length);
    memcpy(newAddr, filedata, length);
    CCLOG("CCFileCache:addFile fileName = %s, data = %p", fileName, filedata);
    m_datas.insert(std::make_pair(fileName, newAddr));
    m_lengths.insert(std::make_pair(fileName, length));
}

unsigned char* CCFileCache::getFileData(const char* fileName, int* length) {
    if(isExist(fileName)) {
        *length = m_lengths[fileName];
        return m_datas[fileName];
    } else {
        CCLOG("Can't find fileName = %s\n", fileName);
        return NULL;
    }
}

void CCFileCache::purge() {
    auto it = m_datas.begin();
    for(; it != m_datas.end(); ++it) {
        CC_SAFE_FREE(it->second);
    }
    m_datas.clear();
}