Pod::Spec.new do |spec|
    spec.name                     = 'kmastodon-release'
    spec.version                  = '0.0.1'
    spec.homepage                 = 'https://github.com/uakihir0/kmastodon'
    spec.source                   = { :http=> ''}
    spec.authors                  = 'Akihiro Urushihara'
    spec.license                  = 'MIT'
    spec.summary                  = 'kmastodon is Mastodon library for Kotlin Multiplatform.'
    spec.vendored_frameworks      = 'release/kmastodon.xcframework'
    spec.libraries                = 'c++'
                
                
                
                
                
                
                
end