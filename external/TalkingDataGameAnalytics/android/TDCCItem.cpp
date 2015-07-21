#include "TDCCItem.h"
#include "TDGAJniHelper.h"
#include "TDGALog.h"

extern jclass gClass_Item;

void TDCCItem::onPurchase(const char* item, int number, double price) {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_Item
		, "onPurchase"
		, "(Ljava/lang/String;ID)V")) {
		jstring jitem = t.env->NewStringUTF(item);
		t.env->CallStaticVoidMethod(gClass_Item, t.methodID, jitem, number, price);
		t.env->DeleteLocalRef(jitem);
	}
}
    
void TDCCItem::onUse(const char* item, int number) {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_Item
		, "onUse"
		, "(Ljava/lang/String;I)V")) {
		jstring jitem = t.env->NewStringUTF(item);
		t.env->CallStaticVoidMethod(gClass_Item, t.methodID, jitem, number);
		t.env->DeleteLocalRef(jitem);
	}
}
