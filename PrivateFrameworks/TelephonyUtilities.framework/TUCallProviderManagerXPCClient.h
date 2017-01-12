/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerDataSource, TUCallProviderManagerXPCClient> {
    <TUCallProviderManagerDataSourceDelegate> * _delegate;
    NSDictionary * _providersByIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _requestedInitialState;
    int  _token;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUCallProviderManagerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSDictionary *providersByIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL requestedInitialState;
@property (readonly) Class superclass;
@property (nonatomic) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)callProviderManagerAllowedClasses;
+ (id)callProviderManagerClientXPCInterface;
+ (id)callProviderManagerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;

- (void).cxx_destruct;
- (void)_requestInitialState;
- (void)_updateProvidersByIdentifier:(id)arg1;
- (void)blockUntilInitialStateReceived;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (id)providersByIdentifier;
- (id)queue;
- (BOOL)requestedInitialState;
- (id)server;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProvidersByIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestedInitialState:(BOOL)arg1;
- (void)setToken:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (int)token;
- (oneway void)updateProvidersByIdentifier:(id)arg1;
- (id)xpcConnection;

@end