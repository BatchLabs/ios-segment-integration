#import <Foundation/Foundation.h>

#if defined(__has_include) && __has_include(<Analytics/SEGIntegrationFactory.h>)
#import <Analytics/SEGIntegrationFactory.h>
#else
#import <Segment/SEGIntegrationFactory.h>
#endif

@interface SEGBatchIntegrationFactory : NSObject <SEGIntegrationFactory>

+ (instancetype)instance;

@end
