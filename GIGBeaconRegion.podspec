Pod::Spec.new do |s|
  s.name             = "GIGBeaconRegion"
  s.version          = "1.0.1"
  s.summary          = "CLBeaconRegion subclass that can range beacons with any proximity UDID"
  s.homepage         = "https://github.com/alexruperez/GIGBeaconRegion"
  s.license          = 'MIT'
  s.author           = { "alexruperez" => "contact@alexruperez.com" }
  s.source           = { :git => "https://github.com/alexruperez/GIGBeaconRegion.git", :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/alexruperez'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes'

  s.frameworks = 'CoreLocation'
end
