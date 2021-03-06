//
//  PWCoreSDKResponse.h
//  PWCoreSDK
//
//  Created by Tien Nhat Vu on 9/30/16.
//  Copyright © 2016 Paymentwall. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BrickToken.h"
#import "Constants.h"

extern NSString * _Nonnull const PAYMENT_SUCCESSFUL;
extern NSString * _Nonnull const PAYMENT_FAIL;
extern NSString * _Nonnull const PAYMENT_CANCELED;

@interface PWCoreSDKResponse : NSObject

@property (nonatomic, assign) PaymentResponseCode responseCode;
@property (nonatomic, assign) PaymentType paymentType;
@property (nonatomic, strong) NSString * _Nullable paymentName;
@property (nonatomic, strong) NSString * _Nullable paymentAmount;
@property (nonatomic, strong) NSString * _Nullable paymentCurrency;
@property (nonatomic, strong) NSString * _Nullable userID;
@property (nonatomic, strong) NSString * _Nonnull message;
@property (nonatomic, strong) NSString * _Nullable productID;
@property (nonatomic, strong) NSString * _Nullable userEmail;
@property (nonatomic, strong) BrickToken * _Nullable token;

@end
