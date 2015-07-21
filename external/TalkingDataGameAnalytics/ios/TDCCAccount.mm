//
//  CCTalkingDataGA.mm
//  cocod2dx-talkingdata
//
//  Created by Wei Mike on 13-5-8.
//  Copyright (c) 2013年 Talkingdata. All rights reserved.
//

#import "TDCCAccount.h"
#import "TalkingDataGA.h"

TDCCAccount::TDCCAccount():mAccount(NULL) {
}

TDCCAccount::~TDCCAccount() {
}

TDCCAccount* TDCCAccount::setAccount(const char* accountId) {
    if (NULL == accountId || strlen(accountId) == 0) {
        return NULL;
    }
    NSString* id = [NSString stringWithUTF8String:accountId];
    
    static TDCCAccount account;
    account.mAccount = [TDGAAccount setAccount:id];
    return &account;
}

void TDCCAccount::setAccountName(const char* accountName) {
    if (NULL == accountName || strlen(accountName) == 0) {
        return;
    }
    if (mAccount) {
        NSString* value = [NSString stringWithUTF8String:accountName];
        TDGAAccount* a = (TDGAAccount*)mAccount;
        [a setAccountName:value];
    }
}

void TDCCAccount::setAccountType(TDCCAccountType accountType){
    if (mAccount) {
        TDGAAccount* a = (TDGAAccount*)mAccount;
        [a setAccountType:(TDGAAccountType)accountType];
    }
}

void TDCCAccount::setLevel(int level) {
    if (mAccount) {
        TDGAAccount* a = (TDGAAccount*)mAccount;
        [a setLevel:level];
    }
}

void TDCCAccount::setGender(TDCCGender gender) {
    if (mAccount) {
        TDGAAccount* a = (TDGAAccount*)mAccount;
        [a setGender:(TDGAGender)gender];
    }
}

void TDCCAccount::setAge(int age){
    if (mAccount) {
        TDGAAccount* a = (TDGAAccount*)mAccount;
        [a setAge:age];
    }
}

void TDCCAccount::setGameServer(const char* gameServer){
    if (NULL == gameServer || strlen(gameServer) == 0) {
        return;
    }
    if (mAccount) {
        NSString* value = [NSString stringWithUTF8String:gameServer];
        TDGAAccount* a = (TDGAAccount*)mAccount;
        [a setGameServer:value];
    }
}