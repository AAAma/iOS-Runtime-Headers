/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class WebScriptObject, NSString;

@interface SUScriptEventListener : NSObject  {
    WebScriptObject *_callback;
    NSString *_name;
    BOOL _useCapture;
}

@property(retain) WebScriptObject * callback;
@property(retain) NSString * name;
@property BOOL shouldUseCapture;


- (void)setName:(id)arg1;
- (void)dealloc;
- (id)name;
- (BOOL)shouldUseCapture;
- (void)setShouldUseCapture:(BOOL)arg1;
- (void)setCallback:(id)arg1;
- (id)callback;

@end