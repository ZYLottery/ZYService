//
//  ZYServiceError.h
//  ZYService
//
//  Created by 何伟东 on 16/9/9.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZYServiceError : NSObject


/**
 *  请求的URL
 */
@property(nonatomic,assign) NSString *url;
/**
 *  http错误码
 */
@property(nonatomic,assign) NSInteger httpCode;
/**
 *  api错误码
 */
@property(nonatomic,assign) NSInteger apiCode;
/**
 *  api错误信息
 */
@property(nonatomic,strong) NSString *message;
/**
 *  错误信息总对象
 */
@property(nonatomic,strong) NSError *error;



@end
