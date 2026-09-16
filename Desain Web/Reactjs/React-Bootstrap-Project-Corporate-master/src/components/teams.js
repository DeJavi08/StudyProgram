import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import Image from 'react-bootstrap/Image';

const teamsData = [
  {
    id: 1,
    image: 'https://media.licdn.com/dms/image/v2/D5603AQGDM_9qJ5Kd_Q/profile-displayphoto-scale_200_200/B56aAuWY5eHMAc-/0/1787484017048?e=1791417600&v=beta&t=G-AAZxjkWpXBfYkGfkZYhkPtWQU5ashgbQ8--X2v2KI',
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Aditya Habibi',
    designation: 'CEO',
    description: 'Penggagas startup AHA TECH, memulai awal karir tanpa karyawan'
  },
  {
    id: 2,
    image: 'https://avatars.githubusercontent.com/u/217610308?v=4',
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Faiz Akmal',
    designation: 'Manager',
    description: 'Seorang pemuda yang suka minum cokelat hangat pada saat ngoding'
  },
  {
    id: 3,
    image: 'https://adariya.vercel.app/_next/image?url=%2Fimages%2Fabout-profile.jpg&w=256&q=75',
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Adrian',
    designation: 'DevOps',
    description: 'Menguasai linux dan bersemangat mengerjakan project berbobot'
  },
  {
    id: 4,
    image: 'https://media.licdn.com/dms/image/v2/D4D03AQEtIilrD4vKhQ/profile-displayphoto-shrink_800_800/B4DZ.oCufcH0Ac-/0/1785230715549?e=1791417600&v=beta&t=2u85nqt1SgUJ-mgb43QWMHMJmGox3VIkHP0DzTIJR_4',
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: "Najmi Sa'idan",
    designation: 'UI/UX',
    description: 'Hebat dalam segala aspek desain, telah bekerja di stasiun NASA.'
  },
  {
    id: 5,
    image: 'https://media.licdn.com/dms/image/v2/D4D03AQHzhetSWEnHJg/profile-displayphoto-crop_800_800/B4DZ2_N5i4HIAM-/0/1777029587576?e=1791417600&v=beta&t=s3aENpM6ItGDt5c-Ud-hFLoM-RTmC7fWTDXzgbdB8-s',
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Ihsan',
    designation: 'Developer',
    description: 'Berpengalaman dalam dunia coding, tersertifikasi banyak pelatihan coding.'
  },
  {
    id: 6,
    image: 'https://scontent-nrt1-2.cdninstagram.com/v/t51.82787-19/671271859_18097482671113387_4546098812620335319_n.jpg?_nc_cat=102&ccb=7-5&_nc_sid=bf7eb4&efg=eyJ2ZW5jb2RlX3RhZyI6InByb2ZpbGVfcGljLnd3dy4xMDgwLkMzIn0%3D&_nc_ohc=9J7D37XG5XMQ7kNvwGuy9hg&_nc_oc=AdrFl3YQT5zy1uBVLsZDqUsHK0Nmv3e0fAMPC67LjmcITiNlIQysqRqj0MaAEfM2X04yb-vXg-c0IFcepqGIU4A4&_nc_zt=24&_nc_ht=scontent-nrt1-2.cdninstagram.com&_nc_gid=VglEUXBGsmoL_RaAEjWyhw&_nc_ss=7b6a8&oh=00_AQKWze-YgPp-dOYDajQLd1buSdEdl7yc3_-5aHW-WKeZvw&oe=6AB00F18',
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Nasril Ilham',
    designation: 'Developer',
    description: 'Sesepuh di dunia coding dan AI agent, bisa diandalkan'
  },
  {
    id: 7,
    image: 'https://instagram.fsub6-1.fna.fbcdn.net/v/t51.75761-15/481014407_18353935669182082_7509272279190779270_n.webp?_nc_cat=103&_nc_map=urlgen_bucketless&ig_cache_key=MzU3MjY4MzgyNjY3MzMyMzM0OA%3D%3D.3-ccb7-5&ccb=7-5&_nc_sid=58cdad&efg=eyJ2ZW5jb2RlX3RhZyI6IkNBUk9VU0VMX0lURU0ueHBpZHMuMTQ0MC5zZHIucmVndWxhcl9waG90by5DMyJ9&_nc_ohc=TczEa7AJIFsQ7kNvwE1tzT4&_nc_oc=Adp20vVQ4nAotev8YkhhY87-sEkccLyjgepeYAaa3-6Wt0_qLZExse804elvHqpOJUU&_nc_ad=z-m&_nc_cid=0&_nc_zt=23&_nc_ht=instagram.fsub6-1.fna&_nc_gid=Ny6O15IuawzZFnsAIYPbKQ&_nc_ss=7a22e&oh=00_AQI66UTlj6huItF_UQcBZ5qXIp9YSiyO69NKymKDqsQS1w&oe=6AB015A8',
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'Roamar Dzakha',
    designation: 'IoT Man',
    description: 'Mahir dalam membuat prototype hardware, menjuarai berbagai perlombaan lomba'
  },
  {
    id: 8,
    image: require('../assets/images/team8.jpg'),
    fbLink: 'https://www.facebook.com',
    twitterLink: 'https://www.twitter.com',
    linkedinLink: 'https://www.linkedin.com',
    name: 'David Smith',
    designation: 'SEO Expert',
    description: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit. Qui facilis, totam maiores.'
  }
]

function AppTeams() {
  return (
    <section id="teams" className="block teams-block">
      <Container fluid>
        <div className="title-holder">
          <h2>Our teams</h2>
          <div className="subtitle">some of our experts</div>
        </div>
        <Row>
          {
            teamsData.map(teams => {
              return (
                <Col sm={3} key={teams.id}>
                  <div className='image'>
                    <Image src={teams.image} />
                    <div className='overlay'>
                      <div className='socials'>
                        <ul>
                          <li><a href={teams.fbLink}><i className="fab fa-facebook-f"></i></a></li>
                          <li><a href={teams.twitterLink}><i className="fab fa-twitter"></i></a></li>
                          <li><a href={teams.linkedinLink}><i className="fab fa-linkedin-in"></i></a></li>
                        </ul>
                      </div>
                    </div>
                  </div>
                  <div className='content'>
                    <h3>{teams.name}</h3>
                    <span className='designation'>{teams.designation}</span>
                    <p>{teams.description}</p>
                  </div>
                </Col>
              );
            })
          }
        </Row>
      </Container>
    </section>
  );
}

export default AppTeams;