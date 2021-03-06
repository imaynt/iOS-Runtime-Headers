/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWorkoutManagerInternal : NSObject {
    <CMWorkoutManagerDelegate> * fDelegate;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; struct CLConnection {} x4; bool x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; } * fLocationdConnection;
    BOOL  fResumeWorkoutOnInterrupt;
    CMWorkoutManager * fSender;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
    CMWorkout * fWorkout;
}

- (void)_handleDaemonEvent:(id)arg1;
- (void)_handleDaemonResponse:(id)arg1;
- (void)_registerForWorkoutEvents;
- (void)_startWatchdogCheckins;
- (void)_startWorkout:(id)arg1;
- (void)_stopWatchdogCheckins;
- (void)_stopWorkout:(id)arg1;
- (void)_teardown;
- (void)_unregisterForWorkoutEvents;
- (void)dealloc;
- (id)init;
- (id)swimWorkoutInstance:(id)arg1;

@end
