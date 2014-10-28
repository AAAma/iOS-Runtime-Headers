/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <GEOMapServiceTicket>, GEOMapRegion, GEOMapServiceTraits, NSArray, NSError, NSString;

@interface _MKTicket : NSObject <MKMapServiceTicket> {
    NSError *_error;
    NSArray *_exactMapItems;
    NSArray *_refinedMapItems;
    <GEOMapServiceTicket> *_ticket;
}

@property(readonly) GEOMapRegion * boundingRegion;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSError * error;
@property(readonly) NSArray * exactMapItems;
@property(readonly) unsigned int hash;
@property(readonly) NSArray * refinedMapItems;
@property(readonly) Class superclass;
@property(readonly) GEOMapServiceTraits * traits;

- (void).cxx_destruct;
- (void)applyToCorrectedSearch:(id)arg1;
- (id)boundingRegion;
- (void)cancel;
- (id)description;
- (id)error;
- (id)exactMapItems;
- (id)initWithTicket:(id)arg1;
- (id)refinedMapItems;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 queue:(id)arg2 networkActivity:(id)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(int)arg2 networkActivity:(id)arg3;
- (void)submitWithHandler:(id)arg1 timeout:(int)arg2 queue:(id)arg3 networkActivity:(id)arg4;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(int)arg2 networkActivity:(id)arg3;
- (id)traits;

@end