#import <Foundation/Foundation.h>

#if defined(__has_include) && __has_include(<Analytics/SEGIntegration.h>)
#import <Analytics/SEGIntegration.h>
#else
#import <Segment/SEGIntegration.h>
#endif

@interface SEGBatchIntegration : NSObject <SEGIntegration>

+ (void)saveSettings:(NSDictionary *)settings;
+ (void)startWithSettings:(NSDictionary *)settings;

@property (class) BOOL enableAutomaticStart;

@end
