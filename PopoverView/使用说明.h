PopoverView *popView = [[PopoverView alloc] initWithPoint:CGPointMake(251*(WIDTH)/375,316-juli) titles:@[[WM_Single defaultSingle].INFO_USER] images:nil];
popView.selectRowAtIndex = ^(NSInteger index){
    // StoreModel *model = self.OperateInfoArray[index];
    // header.OperatorLabel.text = model.COM_NAME;
    
};
[popView show];
