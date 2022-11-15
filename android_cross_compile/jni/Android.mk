LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := helloWorld
LOCAL_SRC_FILES := hello.cpp
LOCAL_LDLIBS := -llog -landroid

include $(BUILD_EXECUTABLE)

