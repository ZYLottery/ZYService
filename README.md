***
#### 章鱼彩票ZYService iOS端使用说明
##### 一、准备工作
1、引入ZYService.framework  
2、pod方式引用 `pod 'ZYService', '~> 0.0.1.7'  `  
2、如果不是使用CocoaPods则需要去github下载相应的依赖导入，如果使用了pod在 update或install的时候会自动引入。  
-`ZYKit pod 'ZYKit', '~> 0.0.3.0' Homepage: https://github.com/ZYLottery/ZYKit`  
-`MJExtension pod 'MJExtension', '~> 3.0.13' Homepage: https://github.com/CoderMJLee/MJExtension`  
-`AFNetworking   pod 'AFNetworking', '~> 3.1.0 Homepage: https://github.com/AFNetworking/AFNetworking'`  

##### 二、初始化
**1、mapi**
```
ZYMobileBaseInfo *mobileBaseInfo = [ZYMobileBaseInfo baseInfo];
[mobileBaseInfo setServiceUrl:@""];
[mobileBaseInfo setCookieData:@""];
[mobileBaseInfo setClientId:@""];
[mobileBaseInfo setSecret:@""];
[mobileBaseInfo setAppid:@""];
[mobileBaseInfo setPublicKey:@""];
[mobileBaseInfo setProductId:APP_CONFIG_PLIST.productI@""];
[mobileBaseInfo setChannelId:@""];
//初始化mapi
[[ZYServiceEngine share] initializeMobileService:mobileBaseInfo delegate:self];

//设置debug模式 会打印日志
[ZYServiceEngine share].isDebug = YES;
    
```

**1、queryApi**

```
ZYQueryBaseInfo *queryBaseInfo = [ZYQueryBaseInfo baseInfo];
[queryBaseInfo setServiceUrl:@""];
[queryBaseInfo setClientId:@""];
[queryBaseInfo setAppid:@""];
[queryBaseInfo setProductId:@""];
[queryBaseInfo setChannelId:@""];

[[ZYServiceEngine share] initializeQueryService:queryBaseInfo];

```
##### 三、使用
**mapi**
```
/**
 *  用户登录示例
 *
 *  @param userName               用户名
 *  @param password               密码
 *  @param mobileAPISuccessHandle <#mobileAPISuccessHandle description#>
 *  @param failureHandle <#mobileAPIFailureHandle description#>
 */
-(void)loginWithUserName:(NSString*)userName
                      password:(NSString*)password
           successHandle:(MobileSuccessHandle)successHandle
           failureHandle:(MobileFailureHandle)failureHandle{
    NSMutableDictionary *patamerters = [NSMutableDictionary dictionary];
    //接口协议号
    [patamerters setValue:userName forKey:@"username"];
    [patamerters setValue:password forKey:@"password"];
    //post请求
    
    [[ZYServiceEngine share].mobileService postWithPatamerters:patamerters
                                suffix:@"/command/execute"
                               command:@"100001"
                               encrypt:ZYMobileEncryption_3
                                  page:nil needLogin:NO
                         successHandle:successHandle
                         failureHandle:failureHandle];
}

```
**queryApi**

```
/**
 对阵基本信息

 @param matchId       赛事编号
 @param lotteryType   彩种:1-足球；2-篮球
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)againstBaseInfoWithMatchId:(NSString*)matchId
           lotteryType:(NSString*)lotteryType
                    successHandle:(QuerySuccessHandle)successHandle
                    failureHandle:(QueryFailureHandle)failureHandle{
    NSMutableDictionary *patamerters = [NSMutableDictionary dictionary];
    [patamerters setValue:@"200001" forKey:@"command"];
    [patamerters setValue:matchId forKey:@"matchId"];
    [patamerters setValue:lotteryType forKey:@"lotteryType"];
    [[ZYServiceEngine share].queryService getWithPatamerters:patamerters
                              suffix:@"/command/execute"
                       successHandle:successHandle
                       failureHandle:failureHandle];
}
```

***

#### 章鱼彩票ZYService Android端使用说明
