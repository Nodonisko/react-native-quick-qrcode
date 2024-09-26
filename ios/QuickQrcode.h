#ifdef __cplusplus
#import "react-native-quick-qrcode.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNQuickQrcodeSpec.h"

@interface QuickQrcode : NSObject <NativeQuickQrcodeSpec>
#else
#import <React/RCTBridgeModule.h>

@interface QuickQrcode : NSObject <RCTBridgeModule>
#endif

@end
