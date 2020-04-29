Pod::Spec.new do |s|
  s.name = "LifevitSDK"
  s.version = "1.7.5"
  s.author = "Lifevit S.L"

  s.license = { :type => 'Commercial', :text => 'See https://www.lifevit.es/terms/publisher' }
  s.homepage = 'https://www.lifevit.es'
  s.summary = 'Lifevit SDK'
  
  s.source = {  :http => 'https://cocoapods.lifevit.es/LifevitSDK.framework.1.7.5.zip'}

  s.vendored_frameworks = 'LifevitSDK.framework'
  s.platform = 'ios'

  s.ios.deployment_target = '10.3'

  s.requires_arc = true
end
