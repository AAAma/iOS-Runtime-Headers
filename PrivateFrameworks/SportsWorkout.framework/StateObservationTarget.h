/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSString;

@interface StateObservationTarget : ObservationTarget  {
    NSString *_oldState;
    NSString *_currentState;
}

@property(retain) NSString * oldState;
@property(retain) NSString * currentState;

+ (id)targetWithOldState:(id)arg1 newState:(id)arg2 selector:(SEL)arg3;

- (id)description;
- (void)dealloc;
- (void)setCurrentState:(id)arg1;
- (id)currentState;
- (id)oldState;
- (void)setOldState:(id)arg1;

@end