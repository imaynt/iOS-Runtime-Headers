/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsLoadURLEvent : SSMetricsMutableEvent

@property (nonatomic, retain) NSString *DNSServers;
@property (nonatomic, retain) NSString *clientCorrelationKey;
@property (nonatomic) double connectionEndTime;
@property (nonatomic) BOOL connectionReused;
@property (nonatomic) unsigned int connectionStartNStatRXBytes;
@property (nonatomic) unsigned int connectionStartNStatTXBytes;
@property (nonatomic) double connectionStartTime;
@property (nonatomic) unsigned int connectionStopNStatRXBytes;
@property (nonatomic) unsigned int connectionStopNStatTXBytes;
@property (nonatomic, retain) NSString *connectionType;
@property (nonatomic) double domainLookupEndTime;
@property (nonatomic) double domainLookupStartTime;
@property (nonatomic) double fetchStartTime;
@property (nonatomic) unsigned int redirectCount;
@property (nonatomic) double redirectEndTime;
@property (nonatomic) double redirectStartTime;
@property (nonatomic) double requestStartTime;
@property (nonatomic, retain) NSString *requestURL;
@property (nonatomic, retain) NSString *resolvedIPAddress;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic) double secureConnectionStartTime;
@property (nonatomic) int statusCode;
@property (setter=setXPSamplingForced:, nonatomic) BOOL xpSamplingForced;
@property (setter=setXPSamplingPercentageCachedResponses:, nonatomic) double xpSamplingPercentageCachedResponses;
@property (setter=setXPSamplingPercentageUsers:, nonatomic) double xpSamplingPercentageUsers;
@property (setter=setXPSessionDuration:, nonatomic) double xpSessionDuration;

+ (id)_bagPerformanceValues;
+ (id)_bagValueForKey:(id)arg1;
+ (double)_randomDouble;
+ (void)_setTimingMetricsWindowStartTime:(id)arg1;
+ (id)_timingMetricsWindowStartTime;
+ (BOOL)shouldCollectTimingData;
+ (BOOL)shouldLogTimingMetrics;
+ (BOOL)shouldReportCachedEvent;

- (id)DNSServers;
- (id)clientCorrelationKey;
- (double)connectionEndTime;
- (BOOL)connectionReused;
- (unsigned int)connectionStartNStatRXBytes;
- (unsigned int)connectionStartNStatTXBytes;
- (double)connectionStartTime;
- (unsigned int)connectionStopNStatRXBytes;
- (unsigned int)connectionStopNStatTXBytes;
- (id)connectionType;
- (id)description;
- (double)domainLookupEndTime;
- (double)domainLookupStartTime;
- (double)fetchStartTime;
- (id)init;
- (unsigned int)redirectCount;
- (double)redirectEndTime;
- (double)redirectStartTime;
- (double)requestStartTime;
- (id)requestURL;
- (id)resolvedIPAddress;
- (double)responseEndTime;
- (double)responseStartTime;
- (double)secureConnectionStartTime;
- (void)setClientCorrelationKey:(id)arg1;
- (void)setConnectionEndTime:(double)arg1;
- (void)setConnectionReused:(BOOL)arg1;
- (void)setConnectionStartNStatRXBytes:(unsigned int)arg1;
- (void)setConnectionStartNStatTXBytes:(unsigned int)arg1;
- (void)setConnectionStartTime:(double)arg1;
- (void)setConnectionStopNStatRXBytes:(unsigned int)arg1;
- (void)setConnectionStopNStatTXBytes:(unsigned int)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setDNSServers:(id)arg1;
- (void)setDomainLookupEndTime:(double)arg1;
- (void)setDomainLookupStartTime:(double)arg1;
- (void)setFetchStartTime:(double)arg1;
- (void)setRedirectCount:(unsigned int)arg1;
- (void)setRedirectEndTime:(double)arg1;
- (void)setRedirectStartTime:(double)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setResolvedIPAddress:(id)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setSecureConnectionStartTime:(double)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setXPSamplingForced:(BOOL)arg1;
- (void)setXPSamplingPercentageCachedResponses:(double)arg1;
- (void)setXPSamplingPercentageUsers:(double)arg1;
- (void)setXPSessionDuration:(double)arg1;
- (int)statusCode;
- (BOOL)xpSamplingForced;
- (double)xpSamplingPercentageCachedResponses;
- (double)xpSamplingPercentageUsers;
- (double)xpSessionDuration;

@end
