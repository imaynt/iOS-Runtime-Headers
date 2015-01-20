/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEOBusiness, MKYelpDeal, NSMutableDictionary, NSString;

@interface MKMapItemMetadata : NSObject {
    GEOBusiness *_business;
    NSMutableDictionary *_imageCache;
    MKYelpDeal *_yelpDeal;
    bool_hasCheckedForYelpDeal;
}

@property(readonly) GEOBusiness * business;
@property bool hasCheckedForYelpDeal;
@property(retain) NSMutableDictionary * imageCache;
@property(retain) MKYelpDeal * yelpDeal;
@property(readonly) NSString * yelpID;

- (void).cxx_destruct;
- (void)addImage:(id)arg1 forURL:(id)arg2;
- (id)business;
- (bool)hasCheckedForYelpDeal;
- (id)imageCache;
- (id)imageForURL:(id)arg1;
- (id)initWithBusiness:(id)arg1;
- (void)setHasCheckedForYelpDeal:(bool)arg1;
- (void)setImageCache:(id)arg1;
- (void)setYelpDeal:(id)arg1;
- (id)yelpDeal;
- (id)yelpID;

@end