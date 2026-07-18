# clpeak ProGuard rules
# Keep JNI callback methods — called from C++ via GetMethodID.

-keep class test.clpeakarmfix.BenchmarkRepository {
    void record_metric_callback_from_c(...);
    void device_info_callback_from_c(...);
}

# Keep native methods
-keepclasseswithmembernames class test.clpeakarmfix.BenchmarkRepository {
    native <methods>;
}

# Keep data classes used via reflection/channels
-keep class test.clpeakarmfix.ResultEntry { *; }
-keep class test.clpeakarmfix.DeviceInfo { *; }
-keep class test.clpeakarmfix.BenchmarkCategory { *; }
