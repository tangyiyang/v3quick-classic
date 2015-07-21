#include "TDCCVirtualCurrency.h"
#include "TDGAJniHelper.h"
#include "TDGALog.h"

extern jclass gClass_Virtual;

void TDCCVirtualCurrency::onChargeRequest(const char* orderId, const char* iapId, double currencyAmount, const char* currencyType, double virtualCurrencyAmount, const char* paymentType) {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_Virtual
		, "onChargeRequest"
		, "(Ljava/lang/String;Ljava/lang/String;DLjava/lang/String;DLjava/lang/String;)V")) {
		jstring jorderId = t.env->NewStringUTF(orderId);
		jstring jiapId = t.env->NewStringUTF(iapId);
		jstring jcurrencyType = t.env->NewStringUTF(currencyType);
		jstring jpaymentType = t.env->NewStringUTF(paymentType);
		t.env->CallStaticVoidMethod(gClass_Virtual, t.methodID, jorderId, jiapId, currencyAmount, jcurrencyType, virtualCurrencyAmount, jpaymentType);
		t.env->DeleteLocalRef(jorderId);
		t.env->DeleteLocalRef(jiapId);
		t.env->DeleteLocalRef(jcurrencyType);
		t.env->DeleteLocalRef(jpaymentType);
	}
}
    
void TDCCVirtualCurrency::onChargeSuccess(const char* orderId) {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_Virtual
		, "onChargeSuccess"
		, "(Ljava/lang/String;)V")) {
		jstring jorderId = t.env->NewStringUTF(orderId);
		t.env->CallStaticVoidMethod(gClass_Virtual, t.methodID, jorderId);
		t.env->DeleteLocalRef(jorderId);
	}
}

void TDCCVirtualCurrency::onReward(double currencyAmount, const char* reason) {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_Virtual
		, "onReward"
		, "(DLjava/lang/String;)V")) {
		jstring jreason = t.env->NewStringUTF(reason);
		t.env->CallStaticVoidMethod(gClass_Virtual, t.methodID, currencyAmount, jreason);
		t.env->DeleteLocalRef(jreason);
	}
}
